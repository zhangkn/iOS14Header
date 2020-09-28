/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface ICSearchTextCheckingResult : NSTextCheckingResult {

	NSString* _csEvaluatorMatchString;
	NSRange _ic_range;

}

@property (assign,nonatomic) NSRange ic_range;                               //@synthesize ic_range=_ic_range - In the implementation block
@property (nonatomic,retain) NSString * csEvaluatorMatchString;              //@synthesize csEvaluatorMatchString=_csEvaluatorMatchString - In the implementation block
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 ;
-(NSRange)ic_range;
-(id)initWithRange:(NSRange)arg1 csEvaluatorMatchString:(id)arg2 ;
-(NSString *)csEvaluatorMatchString;
-(void)setCsEvaluatorMatchString:(NSString *)arg1 ;
-(void)setIc_range:(NSRange)arg1 ;
@end
