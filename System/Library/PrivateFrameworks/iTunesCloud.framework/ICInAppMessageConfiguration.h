/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface ICInAppMessageConfiguration : NSObject {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSURL * reportEventURL; 
@property (nonatomic,readonly) NSURL * serialCheckURL; 
@property (nonatomic,readonly) NSURL * syncURL; 
@property (nonatomic,readonly) NSURL * resourceDomainURL; 
@property (nonatomic,readonly) long long syncPollingInterval; 
-(long long)syncPollingInterval;
-(NSURL *)syncURL;
-(NSURL *)reportEventURL;
-(NSURL *)resourceDomainURL;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)serialCheckURL;
@end
