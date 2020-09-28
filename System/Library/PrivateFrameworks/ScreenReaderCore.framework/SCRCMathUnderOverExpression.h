/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:12 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class SCRCMathExpression;

@interface SCRCMathUnderOverExpression : SCRCMathExpression {

	SCRCMathExpression* _under;
	SCRCMathExpression* _over;
	SCRCMathExpression* _base;

}

@property (nonatomic,retain) SCRCMathExpression * under;              //@synthesize under=_under - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * over;               //@synthesize over=_over - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * base;               //@synthesize base=_base - In the implementation block
-(SCRCMathExpression *)under;
-(SCRCMathExpression *)over;
-(void)setBase:(SCRCMathExpression *)arg1 ;
-(SCRCMathExpression *)base;
-(id)mathMLString;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)subExpressions;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)latexMathModeDescription;
-(unsigned long long)fractionLevel;
-(BOOL)isRangeSubSuperscript;
-(void)setUnder:(SCRCMathExpression *)arg1 ;
-(void)setOver:(SCRCMathExpression *)arg1 ;
@end
