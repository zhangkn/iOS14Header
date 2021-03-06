/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSUUID, NSString;

@interface SIRINLUUserParse : NSObject <NSSecureCoding> {

	NSArray* _userDialogActs;
	double _probability;
	NSUUID* _nsUUID;
	NSString* _parserId;

}

@property (nonatomic,retain) NSArray * userDialogActs;              //@synthesize userDialogActs=_userDialogActs - In the implementation block
@property (assign,nonatomic) double probability;                    //@synthesize probability=_probability - In the implementation block
@property (nonatomic,retain) NSUUID * nsUUID;                       //@synthesize nsUUID=_nsUUID - In the implementation block
@property (nonatomic,retain) NSString * parserId;                   //@synthesize parserId=_parserId - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)probability;
-(NSUUID *)nsUUID;
-(void)setProbability:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)parserId;
-(id)description;
-(NSArray *)userDialogActs;
-(id)initWithUserDialogActs:(id)arg1 probability:(double)arg2 nsUUID:(id)arg3 parserId:(id)arg4 ;
-(void)setUserDialogActs:(NSArray *)arg1 ;
-(void)setNsUUID:(NSUUID *)arg1 ;
-(void)setParserId:(NSString *)arg1 ;
@end

