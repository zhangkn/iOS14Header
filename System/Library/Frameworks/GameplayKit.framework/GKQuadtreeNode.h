/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKQuadtreeNode : NSObject {

	GKCQuadTreeNode<NSObject>* _cQuadTreeNode;
	GKQuad _quad;

}

@property (nonatomic,readonly) GKQuadRef quad;              //@synthesize quad=_quad - In the implementation block
-(GKQuadRef)quad;
-(1)min;
-(1)max;
-(void*)cQuadTreeNode;
-(void)setCQuadTreeNode:(void*)arg1 ;
@end

