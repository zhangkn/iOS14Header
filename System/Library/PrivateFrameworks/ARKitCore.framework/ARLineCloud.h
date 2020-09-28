/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface ARLineCloud : NSObject <NSCopying> {

	NSArray* _lines;

}

@property (nonatomic,readonly) NSArray * lines;              //@synthesize lines=_lines - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)lines;
-(id)initWithLineCloudData:(id)arg1 ;
@end
