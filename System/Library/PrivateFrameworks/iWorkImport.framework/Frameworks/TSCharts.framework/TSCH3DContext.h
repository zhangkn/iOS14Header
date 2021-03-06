/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface TSCH3DContext : NSObject <NSCopying> {

	FramebufferAttributes mCurrentFramebufferAttributes;

}

@property (nonatomic,readonly) NSSet * childrenContexts; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)sharedContext;
-(unsigned long long)hash;
-(NSSet *)childrenContexts;
-(const FramebufferAttributes*)currentFramebufferAttributes;
-(void)setCurrentFramebufferAttributes:(const FramebufferAttributes*)arg1 ;
@end

