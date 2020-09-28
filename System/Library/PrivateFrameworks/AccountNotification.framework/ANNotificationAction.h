/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ANCachedDictionaryRepresentationProtocol.h>

@class NSURL, NSDictionary, NSString;

@interface ANNotificationAction : NSObject <NSSecureCoding, ANCachedDictionaryRepresentationProtocol> {

	BOOL _isInternalURL;
	NSURL* _url;
	NSDictionary* _options;

}

@property (nonatomic,copy) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                  //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL isInternalURL;                    //@synthesize isInternalURL=_isInternalURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)actionForLaunchingApp:(id)arg1 withOptions:(id)arg2 ;
+(id)actionForOpeningWebURL:(id)arg1 ;
+(id)actionForLaunchingApp:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)perform;
-(NSDictionary *)options;
-(id)initWithManagedObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(id)dictionaryRepresentation;
-(void)setIsInternalURL:(BOOL)arg1 ;
-(BOOL)isInternalURL;
@end
