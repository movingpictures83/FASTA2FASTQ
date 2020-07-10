#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "FASTA2FASTQPlugin.h"

void FASTA2FASTQPlugin::input(std::string file) {
 inputfile = file;
}

void FASTA2FASTQPlugin::run() {}

void FASTA2FASTQPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "bioconvert";
myCommand += " ";
myCommand += "fasta2fastq";
myCommand += " ";
myCommand += inputfile + " ";
myCommand += outputfile + " ";
myCommand += "--force";
myCommand += " ";
 system(myCommand.c_str());
}

PluginProxy<FASTA2FASTQPlugin> FASTA2FASTQPluginProxy = PluginProxy<FASTA2FASTQPlugin>("FASTA2FASTQ", PluginManager::getInstance());
