/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:38 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotoVision/PhotoVision-Structs.h>
#import <PhotoVision/PVObject.h>

@class NSData;

@interface PVFaceprint : PVObject {

	unsigned _faceprintVersion;
	NSData* _faceprintData;

}

@property (assign,nonatomic) unsigned faceprintVersion;              //@synthesize faceprintVersion=_faceprintVersion - In the implementation block
@property (nonatomic,retain) NSData * faceprintData;                 //@synthesize faceprintData=_faceprintData - In the implementation block
+(id)faceprintWithFaceprintData:(id)arg1 faceprintVersion:(unsigned)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)faceprintVersion;
-(NSData *)faceprintData;
-(BOOL)getDistance:(float*)arg1 toOtherFaceprint:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(void)setFaceprintVersion:(unsigned)arg1 ;
-(void)_setPropertiesFrom:(id)arg1 ;
-(void)setFaceprintData:(NSData *)arg1 ;
@end
