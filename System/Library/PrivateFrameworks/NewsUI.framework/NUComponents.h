/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface NUComponents : NSObject {

	NSMutableArray* _mutableComponents;

}

@property (nonatomic,readonly) NSMutableArray * mutableComponents;              //@synthesize mutableComponents=_mutableComponents - In the implementation block
@property (nonatomic,readonly) NSArray * components; 
@property (nonatomic,readonly) NSArray * reversedComponents; 
-(void)addComponent:(id)arg1 ;
-(NSArray *)components;
-(id)init;
-(id)description;
-(NSMutableArray *)mutableComponents;
-(NSArray *)reversedComponents;
@end

