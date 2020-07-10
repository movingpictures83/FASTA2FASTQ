#ifndef FASTA2FASTQPLUGIN_H
#define FASTA2FASTQPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class FASTA2FASTQPlugin : public Plugin
{
public: 
 std::string toString() {return "FASTA2FASTQ";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
