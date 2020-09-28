/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RBSProcessHandle, NSSet;

@interface FBSceneClientHandshake : NSObject {

	RBSProcessHandle* _handle;
	NSSet* _remnants;

}

@property (nonatomic,readonly) RBSProcessHandle * handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSSet * remnants;                  //@synthesize remnants=_remnants - In the implementation block
-(RBSProcessHandle *)handle;
-(NSSet *)remnants;
-(id)init;
-(id)_initWithHandle:(id)arg1 remnants:(id)arg2 ;
-(id)description;
@end
