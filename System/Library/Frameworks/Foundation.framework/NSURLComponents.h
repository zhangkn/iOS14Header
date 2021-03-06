/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSNumber, NSArray;

@interface NSURLComponents : NSObject <NSCopying>

@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * string; 
@property (copy) NSString * scheme; 
@property (copy) NSString * user; 
@property (copy) NSString * password; 
@property (copy) NSString * host; 
@property (copy) NSNumber * port; 
@property (copy) NSString * path; 
@property (copy) NSString * query; 
@property (copy) NSString * fragment; 
@property (copy) NSString * percentEncodedUser; 
@property (copy) NSString * percentEncodedPassword; 
@property (copy) NSString * percentEncodedHost; 
@property (copy) NSString * percentEncodedPath; 
@property (copy) NSString * percentEncodedQuery; 
@property (copy) NSString * percentEncodedFragment; 
@property (readonly) NSRange rangeOfScheme; 
@property (readonly) NSRange rangeOfUser; 
@property (readonly) NSRange rangeOfPassword; 
@property (readonly) NSRange rangeOfHost; 
@property (readonly) NSRange rangeOfPort; 
@property (readonly) NSRange rangeOfPath; 
@property (readonly) NSRange rangeOfQuery; 
@property (readonly) NSRange rangeOfFragment; 
@property (copy) NSArray * queryItems; 
@property (copy) NSArray * percentEncodedQueryItems; 
+(id)componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2 ;
+(id)componentsWithString:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(NSString *)scheme;
-(NSNumber *)port;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)query;
-(NSString *)host;
-(NSArray *)queryItems;
-(NSString *)user;
-(NSString *)string;
-(NSString *)percentEncodedPath;
-(void)setQueryItems:(NSArray *)arg1 ;
-(NSRange)rangeOfPath;
-(void)setHost:(NSString *)arg1 ;
-(NSString *)percentEncodedFragment;
-(NSRange)rangeOfScheme;
-(void)setScheme:(NSString *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)path;
-(NSRange)rangeOfUser;
-(NSString *)percentEncodedPassword;
-(void)setPercentEncodedHost:(NSString *)arg1 ;
-(NSURL *)URL;
-(void)setPercentEncodedPath:(NSString *)arg1 ;
-(void)setPort:(NSNumber *)arg1 ;
-(NSRange)rangeOfQuery;
-(id)init;
-(NSRange)rangeOfPort;
-(id)initWithString:(id)arg1 ;
-(NSString *)percentEncodedHost;
-(void)setFragment:(NSString *)arg1 ;
-(NSRange)rangeOfPassword;
-(void)setPercentEncodedFragment:(NSString *)arg1 ;
-(NSString *)percentEncodedQuery;
-(void)setUser:(NSString *)arg1 ;
-(void)setPercentEncodedQuery:(NSString *)arg1 ;
-(NSString *)fragment;
-(NSString *)percentEncodedUser;
-(id)URLRelativeToURL:(id)arg1 ;
-(void)setPercentEncodedQueryItems:(NSArray *)arg1 ;
-(NSString *)password;
-(NSRange)rangeOfFragment;
-(NSArray *)percentEncodedQueryItems;
-(void)setPassword:(NSString *)arg1 ;
-(void)setPercentEncodedUser:(NSString *)arg1 ;
-(NSRange)rangeOfHost;
-(void)setPercentEncodedPassword:(NSString *)arg1 ;
@end

