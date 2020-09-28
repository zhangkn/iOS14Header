/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ARUIRingsGeometry : NSObject {

	unsigned _circleSegments;
	float _startingRadian;
	float _endingRadian;

}

@property (assign,nonatomic) unsigned circleSegments;              //@synthesize circleSegments=_circleSegments - In the implementation block
@property (assign,nonatomic) float startingRadian;                 //@synthesize startingRadian=_startingRadian - In the implementation block
@property (assign,nonatomic) float endingRadian;                   //@synthesize endingRadian=_endingRadian - In the implementation block
-(unsigned)vertexCount;
-(id)init;
-(unsigned)indexCount;
-(void)setCircleSegments:(unsigned)arg1 ;
-(void)enumerateVertexGeometryWithBlock:(/*^block*/id)arg1 ;
-(unsigned short*)connectedIndiciesGeometry;
-(unsigned)circleSegments;
-(float)endingRadian;
-(float)startingRadian;
-(unsigned)disconnectedIndexCount;
-(unsigned short*)disconnectedIndiciesGeometry;
-(void)setStartingRadian:(float)arg1 ;
-(void)setEndingRadian:(float)arg1 ;
@end
