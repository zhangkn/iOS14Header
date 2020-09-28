/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSOutputStream, NSString;

@interface NviDataLogger : NSObject <NSStreamDelegate> {

	NSOutputStream* _oStream;

}

@property (nonatomic,retain) NSOutputStream * oStream;              //@synthesize oStream=_oStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(NSOutputStream *)oStream;
-(void)logData:(id)arg1 ;
-(void)endRequest;
-(id)initWithFilePath:(id)arg1 appendHdr:(id)arg2 ;
-(void)setOStream:(NSOutputStream *)arg1 ;
@end
