/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ExtensionFoundation.framework/ExtensionFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExtensionFoundation/ExtensionFoundation-Structs.h>
#import <libobjc.A.dylib/EXExtensionPoint.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface _EXExtensionPoint : NSObject <EXExtensionPoint, NSCopying> {

	unsigned _platform;
	NSString* _identifier;
	NSDictionary* _SDKDictionary;

}

@property (retain) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (setter=DKDictionary,retain) NSDictionary * SDKDictionary;              //@synthesize SDKDictionary=_SDKDictionary - In the implementation block
@property (assign) unsigned platform;                                             //@synthesize platform=_platform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)identifier;
-(NSDictionary *)SDKDictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlatform:(unsigned)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)reset;
-(unsigned)platform;
-(void)setSDKDictionary:(NSDictionary *)arg1 ;
@end

