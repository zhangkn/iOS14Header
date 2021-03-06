/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASWBXMLToXMLConverter.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSInputStream, NSMutableData, NSString;

@interface ASDataWBXMLToXMLConverter : ASWBXMLToXMLConverter <NSStreamDelegate> {

	NSInputStream* _input;
	NSMutableData* _output;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)runSynchronously;
-(void)outputString:(id)arg1 ;
-(void)outputData:(id)arg1 ;
-(long long)readFromInput;
-(id)initWithWBXMLData:(id)arg1 forOutput:(id)arg2 usingMetadata:(BOOL)arg3 ;
@end

