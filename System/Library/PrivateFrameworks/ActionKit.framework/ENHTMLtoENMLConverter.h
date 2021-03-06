/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ENXMLSaxParserDelegate.h>
#import <libobjc.A.dylib/ENXMLWriterDelegate.h>

@protocol ENHTMLtoENMLConverterDelegate;
@class ENXMLSaxParser, ENMLWriter, NSMutableString, NSString;

@interface ENHTMLtoENMLConverter : NSObject <ENXMLSaxParserDelegate, ENXMLWriterDelegate> {

	ENXMLSaxParser* _htmlParser;
	ENMLWriter* _enmlWriter;
	NSMutableString* _enml;
	id<ENHTMLtoENMLConverterDelegate> _delegate;
	BOOL _inHTMLBody;
	int _skipCount;

}

@property (assign,nonatomic,__weak) id<ENHTMLtoENMLConverterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)finish;
-(void)setDelegate:(id<ENHTMLtoENMLConverterDelegate>)arg1 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(id<ENHTMLtoENMLConverterDelegate>)delegate;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)writeData:(id)arg1 ;
-(id)htmlParser;
-(void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 ;
-(void)parser:(id)arg1 didFailWithError:(id)arg2 ;
-(id)enmlWriter;
-(void)xmlWriter:(id)arg1 didGenerateData:(id)arg2 ;
-(void)xmlWriterDidEndWritingDocument:(id)arg1 ;
-(id)enmlFromContentsOfHTMLFile:(id)arg1 ;
-(id)enmlFromHTMLContent:(id)arg1 ;
@end

