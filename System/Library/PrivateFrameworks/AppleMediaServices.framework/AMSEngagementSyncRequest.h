/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, NSString;

@interface AMSEngagementSyncRequest : NSObject <NSSecureCoding> {

	NSDictionary* _context;
	NSArray* _destinations;
	NSString* _logKey;
	double _timeout;

}

@property (nonatomic,retain) NSDictionary * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * destinations;              //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,retain) NSString * logKey;                   //@synthesize logKey=_logKey - In the implementation block
@property (assign,nonatomic) double timeout;                      //@synthesize timeout=_timeout - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)archiveClasses;
-(NSArray *)destinations;
-(void)setDestinations:(NSArray *)arg1 ;
-(double)timeout;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)setContext:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)context;
-(void)encodeWithCoder:(id)arg1 ;
@end

