
#include "j2xmlListener.h"

using namespace std;

/// utility function, handy to remove quotes from a json string
string remove_quotes (const string &s) {
  if (s.length() < 2) return s;
  else return s.substr(1,s.length()-2);
}

/////////////////////////////////////////////////////////////////
/// Implementation of the methods from the base listener
/// overwritten by j2xmlListener.h
/// (these are just examples, adjust at will)

void j2xmlListener::exitJson(jsonParser::JsonContext *ctx) {
	std::string xml = "<OBJECT>";
	std::string objectXML = XML.get(ctx->object());
	xml = xml + objectXML + "</OBJECT>";
	//XML.put(ctx, xml);
	std::cout << xml << std::endl;
}

void j2xmlListener::exitDict(jsonParser::DictContext * ctx) {
    std::string xml = "<DICT>";
    std::string xmlPair;
    for (auto parell : ctx->pair()) {
    	xmlPair = XML.get(parell);
    	xml += xmlPair;
    }
    xml += "</DICT>";
    XML.put(ctx, xml);
    esString.put(ctx, false);
}

void j2xmlListener::exitList(jsonParser::ListContext * ctx)  {
	std::string xml = "<LIST>";
	std::string xmlElem, aux;
	bool b;
	for (auto elem : ctx->object()) {
		xmlElem = XML.get(elem);
		b = esString.get(elem);
		if (b) {
			aux = "<ITEM value=" + xmlElem + " />";
		}
		else {
			aux = "<ITEM>" + xmlElem + "</ITEM>";
		}
		xml += aux;
	}
	xml += "</LIST>";
	XML.put(ctx, xml);
	esString.put(ctx, false);
}

void j2xmlListener::exitString(jsonParser::StringContext *ctx) {
	std::string value = ctx->ATOM()->getText();
	XML.put(ctx, value);
	esString.put(ctx, true);
}

void j2xmlListener::exitPair(jsonParser::PairContext * ctx) {
	std::string key = ctx->ATOM()->getText();
	std::string xmlObject = XML.get(ctx->object());
	std::string xml = "<ENTRY key=" + key;
	bool b = esString.get(ctx->object());
	if (b) {
		xml = xml + " value=" + xmlObject + " />";
	}
	else {
		xml = xml + ">" + xmlObject + "</ENTRY>";
	}
	XML.put(ctx, xml);
 }
