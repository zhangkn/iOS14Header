/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSCompoundAssertionState.h>

@class NSSet, NSOrderedSet;

@interface _BSCompoundAssertionState : NSObject <BSCompoundAssertionState> {

	BOOL _active;
	NSOrderedSet* _context;

}

@property (getter=isActive,readonly) BOOL active; 
@property (readonly) NSSet * context; 
@property (readonly) NSOrderedSet * orderedContext; 
-(BOOL)isActive;
-(NSSet *)context;
-(NSOrderedSet *)orderedContext;
-(id)description;
@end

