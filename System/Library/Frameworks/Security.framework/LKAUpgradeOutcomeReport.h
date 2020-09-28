/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface LKAUpgradeOutcomeReport : NSObject {

	int _outcome;
	NSDictionary* _attributes;

}

@property (assign) int outcome;                            //@synthesize outcome=_outcome - In the implementation block
@property (retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(int)outcome;
-(id)initWithOutcome:(int)arg1 attributes:(id)arg2 ;
-(void)setOutcome:(int)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
@end
