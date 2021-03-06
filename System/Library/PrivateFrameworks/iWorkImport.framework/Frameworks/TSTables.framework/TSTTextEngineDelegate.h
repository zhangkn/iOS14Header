/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSWPTextDelegate.h>

@class TSWPPadding;

@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate> {

	TSWPPadding* mPadding;
	unsigned mVerticalAlignment;

}
-(void)dealloc;
-(unsigned)verticalAlignment;
-(id)padding;
-(BOOL)forceWesternLineBreaking;
-(id)initWithPadding:(UIEdgeInsets)arg1 verticalAlignment:(unsigned)arg2 ;
@end

