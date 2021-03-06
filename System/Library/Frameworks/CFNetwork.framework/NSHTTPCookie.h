/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSHTTPCookieInternal, NSDictionary, NSString, NSDate, NSURL, NSArray;

@interface NSHTTPCookie : NSObject <NSCoding> {

	NSHTTPCookieInternal* _cookiePrivate;

}

@property (readonly) HTTPCookie* _inner; 
@property (copy,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long version; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * value; 
@property (copy,readonly) NSDate * expiresDate; 
@property (getter=isSessionOnly,readonly) BOOL sessionOnly; 
@property (copy,readonly) NSString * domain; 
@property (copy,readonly) NSString * path; 
@property (getter=isSecure,readonly) BOOL secure; 
@property (getter=isHTTPOnly,readonly) BOOL HTTPOnly; 
@property (copy,readonly) NSString * comment; 
@property (copy,readonly) NSURL * commentURL; 
@property (copy,readonly) NSArray * portList; 
@property (copy,readonly) NSString * sameSitePolicy; 
+(id)_parsedCookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 ;
+(id)_cookieForSetCookieString:(id)arg1 forURL:(id)arg2 partition:(id)arg3 ;
+(id)cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 ;
+(id)requestHeaderFieldsWithCookies:(id)arg1 ;
+(id)cookieWithProperties:(id)arg1 ;
+(id)_cf2nsCookies:(CFArrayRef)arg1 ;
+(const CFArrayRef)_ns2cfCookies:(id)arg1 ;
+(id)cookieWithCFHTTPCookie:(OpaqueCFHTTPCookieRef)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_key;
-(id)Name;
-(id)Path;
-(id)Port;
-(id)Value;
-(id)Domain;
-(id)Secure;
-(id)MaxAge;
-(id)Expires;
-(id)Comment;
-(id)Version;
-(id)Discard;
-(NSArray *)portList;
-(id)OriginURL;
-(NSDate *)expiresDate;
-(BOOL)isHTTPOnly;
-(id)_initWithProperties:(id)arg1 fromString:(BOOL)arg2 ;
-(NSURL *)commentURL;
-(id)CommentURL;
-(BOOL)_isExpired;
-(unsigned long long)version;
-(NSString *)path;
-(NSString *)comment;
-(const OpaqueCFHTTPCookieRef)_CFHTTPCookie;
-(BOOL)isSessionOnly;
-(NSString *)sameSitePolicy;
-(HTTPCookie*)_inner;
-(id)_storagePartition;
-(const OpaqueCFHTTPCookieRef)_GetInternalCFHTTPCookie;
-(id)SameSitePolicy;
-(id)_initWithInternal:(id)arg1 ;
-(id)StoragePartition;
-(id)initWithCFHTTPCookie:(OpaqueCFHTTPCookieRef)arg1 ;
-(BOOL)isSecure;
-(void)dealloc;
-(id)_initWithHeader:(const CompactCookieHeaderRef)arg1 ;
-(long long)_compareForHeaderOrder:(id)arg1 ;
-(id)init;
-(NSDictionary *)properties;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(NSString *)domain;
-(id)_initWithCookie:(id)arg1 partition:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)_initWithReference:(const CompactCookieArrayRef)arg1 index:(long long)arg2 ;
-(id)description;
@end

