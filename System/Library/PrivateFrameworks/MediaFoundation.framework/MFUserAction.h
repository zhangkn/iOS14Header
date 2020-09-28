/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol MFUserAction
@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) long long type; 
@property (readonly,nonatomic) id<MFTimeStamp> timeStamp; 
@property (readonly,nonatomic) NSDictionary * options; 
@property (readonly,nonatomic) long long source; 
@property (readonly,nonatomic) NSString * sourceID; 
@required
-(NSString *)identifier;
-(NSDictionary *)options;
-(id<MFTimeStamp>)timeStamp;
-(long long)type;
-(NSString *)sourceID;
-(long long)source;

@end
