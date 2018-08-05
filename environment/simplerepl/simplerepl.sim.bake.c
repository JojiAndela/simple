
		/* 
		 * File:   bake.c
		 * Author: bake || Simple-lang executable file builder
		 * Description: COmpile SIMPLE-LANG programs into standalone system executable files.
		 */
		
			#include "C:\Users\thecarisma\Documents\SIMPLE_GITHUB\s0.3.36-debug\bin\../bin/../includes/simple.h" 
int main( int argc, char *argv[]) {	
		
			static const unsigned char sim_code[] = { 0xa ,0x2f,0x2a,0x20,0xa ,0x9 ,0x43,0x6f,0x70,0x79,0x72,0x69,0x67,0x68,0x74,0x20,0x28,0x63,0x29,0x20,0x32,0x30,0x31,0x38,0x20,0x41,0x7a,0x65,0x65,0x7a,0x20,0x41,0x64,0x65,0x77,0x61,0x6c,0x65,0x20,0x3c,0x61,0x7a,0x65,0x65,0x7a,0x61,0x64,0x65,0x77,0x61,0x6c,0x65,0x39,0x38,0x40,0x67,0x6d,0x61,0x69,0x6c,0x2e,0x63,0x6f,0x6d,0x22,0x3e,0x20,0xa ,0x9 ,0x4d,0x49,0x54,0x20,0x4c,0x69,0x63,0x65,0x6e,0x73,0x65,0x20,0x43,0x6f,0x70,0x79,0x72,0x69,0x67,0x68,0x74,0x20,0x28,0x63,0x29,0x20,0x32,0x30,0x31,0x38,0x20,0x53,0x49,0x4d,0x50,0x4c,0x45,0x20,0xa ,0xa ,0x2a,0x2f,0xa ,0xa ,0x63,0x61,0x6c,0x6c,0x20,0x22,0x73,0x69,0x6d,0x70,0x6c,0x65,0x2f,0x75,0x74,0x69,0x6c,0x69,0x74,0x69,0x65,0x73,0x2f,0x43,0x6f,0x6e,0x73,0x6f,0x6c,0x65,0x2e,0x73,0x69,0x6d,0x22,0xa ,0x63,0x61,0x6c,0x6c,0x20,0x22,0x73,0x69,0x6d,0x70,0x6c,0x65,0x2f,0x73,0x79,0x73,0x74,0x65,0x6d,0x2f,0x53,0x79,0x73,0x74,0x65,0x6d,0x2e,0x73,0x69,0x6d,0x22,0xa ,0xa ,0x73,0x69,0x6d,0x70,0x6c,0x65,0x52,0x65,0x70,0x6c,0x54,0x69,0x74,0x6c,0x65,0x20,0x3d,0x20,0x22,0x20,0xa ,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0xa ,0x20,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x2d,0x2d,0x20,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x7c,0x20,0x41,0x20,0x73,0x69,0x6d,0x70,0x6c,0x65,0x2c,0x20,0x70,0x6c,0x61,0x69,0x6e,0x20,0x61,0x6e,0x64,0x20,0x69,0x6e,0x6e,0x6f,0x76,0x61,0x74,0x69,0x76,0x65,0x20,0x70,0x72,0x6f,0x67,0x72,0x61,0x6d,0x6d,0x69,0x6e,0x67,0xa ,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x77,0x69,0x74,0x68,0x20,0x6d,0x75,0x6c,0x74,0x69,0x2d,0x70,0x61,0x72,0x61,0x64,0x69,0x67,0x6d,0x2e,0x20,0x49,0x74,0x20,0x63,0x61,0x6e,0x20,0x62,0x65,0x20,0x65,0x6d,0x62,0x65,0x64,0x64,0x65,0x64,0x20,0x69,0x6e,0x20,0xa ,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x2d,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x2d,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x7c,0x20,0x43,0x2f,0x43,0x2b,0x2b,0x20,0x70,0x72,0x6f,0x6a,0x65,0x63,0x74,0x73,0x2e,0x20,0x54,0x68,0x65,0x20,0x6c,0x61,0x6e,0x67,0x75,0x61,0x67,0x65,0x20,0x69,0x73,0x20,0x70,0x6f,0x72,0x74,0x61,0x62,0x6c,0x65,0x20,0xa ,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x74,0x6f,0x20,0x76,0x61,0x72,0x69,0x6f,0x75,0x73,0x20,0x4f,0x53,0x20,0x69,0x6e,0x63,0x6c,0x75,0x64,0x69,0x6e,0x67,0x20,0x77,0x69,0x6e,0x64,0x6f,0x77,0x73,0x2c,0x20,0x6d,0x61,0x63,0x4f,0x53,0x2c,0x20,0x61,0x6e,0x79,0xa ,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x6c,0x69,0x6e,0x75,0x78,0x20,0x61,0x6e,0x64,0x20,0x75,0x6e,0x69,0x78,0x20,0x64,0x69,0x73,0x74,0x72,0x6f,0x73,0x20,0x61,0x6e,0x64,0x20,0x6f,0x74,0x68,0x65,0x72,0x20,0x4f,0x53,0x2e,0xa ,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x7c,0x20,0x54,0x68,0x69,0x73,0x20,0x69,0x73,0x20,0x74,0x68,0x65,0x20,0x6f,0x66,0x66,0x69,0x63,0x69,0x61,0x6c,0x20,0x52,0x45,0x50,0x4c,0x20,0x70,0x72,0x6f,0x67,0x72,0x61,0x6d,0x20,0x66,0x6f,0x72,0x20,0x74,0x68,0x65,0xa ,0x20,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x7c,0x20,0x4c,0x61,0x6e,0x67,0x75,0x61,0x67,0x65,0x2e,0x20,0xa ,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0xa ,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x52,0x45,0x50,0x4c,0x20,0x28,0x52,0x65,0x61,0x64,0x2d,0x45,0x76,0x61,0x6c,0x2d,0x50,0x72,0x69,0x6e,0x74,0x2d,0x4c,0x6f,0x6f,0x70,0x29,0xa ,0x20,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x2d,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x7c,0x20,0x56,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x22,0x2b,0x67,0x65,0x74,0x53,0x69,0x6d,0x70,0x6c,0x65,0x56,0x65,0x72,0x73,0x69,0x6f,0x6e,0x28,0x29,0x2b,0x22,0xa ,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x7c,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0x20,0x7c,0x20,0x41,0x75,0x74,0x68,0x6f,0x72,0x20,0x3a,0x20,0x41,0x7a,0x65,0x65,0x7a,0x20,0x41,0x64,0x65,0x77,0x61,0x6c,0x65,0xa ,0x20,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x20,0x20,0x20,0x20,0x7c,0x20,0x4d,0x49,0x54,0x20,0x4c,0x69,0x63,0x65,0x6e,0x73,0x65,0x20,0x43,0x6f,0x70,0x79,0x72,0x69,0x67,0x68,0x74,0x20,0x28,0x63,0x29,0x20,0x32,0x30,0x31,0x38,0x20,0x53,0x49,0x4d,0x50,0x4c,0x45,0xa ,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,0x20,0xa ,0x22,0xa ,0x9 ,0xa ,0x9 ,0x70,0x72,0x69,0x6e,0x74,0x4c,0x69,0x6e,0x65,0x57,0x69,0x74,0x68,0x43,0x6f,0x6c,0x6f,0x72,0x28,0x43,0x6f,0x6e,0x73,0x6f,0x6c,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x2e,0x47,0x52,0x45,0x45,0x4e,0x28,0x29,0x2c,0x20,0x6e,0x75,0x6c,0x6c,0x29,0xa ,0x9 ,0x70,0x72,0x69,0x6e,0x74,0x57,0x69,0x74,0x68,0x46,0x47,0x28,0x43,0x6f,0x6e,0x73,0x6f,0x6c,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x2e,0x59,0x45,0x4c,0x4c,0x4f,0x57,0x28,0x29,0x2c,0x20,0x73,0x69,0x6d,0x70,0x6c,0x65,0x52,0x65,0x70,0x6c,0x54,0x69,0x74,0x6c,0x65,0x29,0xa ,0x9 ,0x70,0x72,0x69,0x6e,0x74,0x4c,0x69,0x6e,0x65,0x57,0x69,0x74,0x68,0x43,0x6f,0x6c,0x6f,0x72,0x28,0x43,0x6f,0x6e,0x73,0x6f,0x6c,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x2e,0x47,0x52,0x45,0x45,0x4e,0x28,0x29,0x2c,0x20,0x6e,0x75,0x6c,0x6c,0x29,0xa ,0x77,0x68,0x69,0x6c,0x65,0x20,0x74,0x72,0x75,0x65,0x20,0x7b,0xa ,0x9 ,0x70,0x72,0x69,0x6e,0x74,0x57,0x69,0x74,0x68,0x46,0x47,0x28,0x43,0x6f,0x6e,0x73,0x6f,0x6c,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x2e,0x43,0x59,0x41,0x4e,0x28,0x29,0x2c,0x20,0x22,0x73,0x69,0x6d,0x70,0x6c,0x65,0x40,0x22,0x2b,0x67,0x65,0x74,0x4f,0x53,0x28,0x29,0x2b,0x22,0x20,0x3e,0x3e,0x3e,0x20,0x22,0x29,0xa ,0x9 ,0x72,0x65,0x61,0x64,0x20,0x63,0x6f,0x64,0x65,0xa ,0x9 ,0x74,0x72,0x79,0xa ,0x9 ,0x9 ,0x65,0x78,0x65,0x63,0x75,0x74,0x65,0x43,0x6f,0x64,0x65,0x28,0x63,0x6f,0x64,0x65,0x29,0xa ,0x9 ,0x9 ,0x64,0x69,0x73,0x70,0x6c,0x61,0x79,0x20,0x6e,0x6c,0xa ,0x9 ,0x63,0x61,0x74,0x63,0x68,0xa ,0x9 ,0x9 ,0x70,0x72,0x69,0x6e,0x74,0x57,0x69,0x74,0x68,0x46,0x47,0x28,0x43,0x6f,0x6e,0x73,0x6f,0x6c,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x2e,0x52,0x45,0x44,0x28,0x29,0x2c,0x20,0x5f,0x5f,0x65,0x72,0x72,0x5f,0x5f,0x2b,0x22,0x5c,0x6e,0x22,0x29,0xa ,0x9 ,0x65,0x6e,0x64,0xa ,0x7d,0x20,0xa };
			
			List* list ; int x ;
			SimpleState *sState ;
			sState = create_instance();
			sState->argc = argc ; 
			sState->argv = argv ; 
			//hack around cmdparams 
			list = simple_state_newvar(sState,"cmdparams");
			simple_list_setint_gc(sState->vm->sState,list,SIMPLE_VAR_TYPE,SIMPLE_VM_LIST);
			simple_list_setlist_gc(sState->vm->sState,list,SIMPLE_VAR_VALUE);
			list = simple_list_getlist(list,SIMPLE_VAR_VALUE);
			for ( x = 0 ; x < sState->vm->sState->argc ; x++ ) {
					simple_list_addstring_gc(sState->vm->sState,list,sState->vm->sState->argv[x]);
			}
			//hack end
			execute_code(sState, (char *) sim_code);
			finalize(sState);
		}

