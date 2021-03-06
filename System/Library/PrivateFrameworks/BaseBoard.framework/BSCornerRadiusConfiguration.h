/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BSCornerRadiusConfiguration : NSObject <BSXPCCoding, NSCopying> {

	double _topLeft;
	double _bottomLeft;
	double _bottomRight;
	double _topRight;

}

@property (nonatomic,readonly) BOOL isCongruent; 
@property (nonatomic,readonly) double topLeft;                      //@synthesize topLeft=_topLeft - In the implementation block
@property (nonatomic,readonly) double bottomLeft;                   //@synthesize bottomLeft=_bottomLeft - In the implementation block
@property (nonatomic,readonly) double bottomRight;                  //@synthesize bottomRight=_bottomRight - In the implementation block
@property (nonatomic,readonly) double topRight;                     //@synthesize topRight=_topRight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCornerRadius:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)bottomLeft;
-(double)topLeft;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)topRight;
-(id)initWithTopLeft:(double)arg1 bottomLeft:(double)arg2 bottomRight:(double)arg3 topRight:(double)arg4 ;
-(double)bottomRight;
-(BOOL)isCongruent;
-(unsigned long long)hash;
-(NSString *)description;
@end

