/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NFValueAddedServiceCard : NSObject <NSSecureCoding> {

	BOOL _userInterventionRequired;
	int _type;
	NSData* _identifier;
	NSData* _token;
	NSData* _data;

}

@property (nonatomic,retain) NSData * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign) BOOL userInterventionRequired;              //@synthesize userInterventionRequired=_userInterventionRequired - In the implementation block
@property (assign) int type;                                   //@synthesize type=_type - In the implementation block
@property (retain) NSData * token;                             //@synthesize token=_token - In the implementation block
@property (retain) NSData * data;                              //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)identifier;
-(NSData *)data;
-(void)setIdentifier:(NSData *)arg1 ;
-(void)setToken:(NSData *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(void)setUserInterventionRequired:(BOOL)arg1 ;
-(NSData *)token;
-(int)type;
-(id)asDictionary;
-(id)initWithCoder:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)userInterventionRequired;
@end

