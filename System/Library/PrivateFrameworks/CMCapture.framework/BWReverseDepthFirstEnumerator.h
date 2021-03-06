/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:23 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/BWNodeEnumerator.h>

@class NSMutableArray;

@interface BWReverseDepthFirstEnumerator : BWNodeEnumerator {

	int _ordering;
	NSMutableArray* _stack;
	unsigned long long _currentSinkIndex;

}
-(id)_nextUnvisitedParent:(id)arg1 ;
-(id)initWithGraph:(id)arg1 vertexOrdering:(int)arg2 ;
-(id)nextObject;
-(void)dealloc;
@end

