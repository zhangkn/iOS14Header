/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLPXNumberFilter.h>

@interface QLPXChangeDirectionNumberFilter : QLPXNumberFilter {

	double _threshold;
	double _minimumChange;

}

@property (assign,nonatomic) double minimumChange;              //@synthesize minimumChange=_minimumChange - In the implementation block
-(id)initWithInput:(double)arg1 ;
-(double)initialOutputForInput:(double)arg1 ;
-(double)minimumChange;
-(double)updatedOutput;
-(void)setMinimumChange:(double)arg1 ;
@end

