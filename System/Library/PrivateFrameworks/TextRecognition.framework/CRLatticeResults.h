/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface CRLatticeResults : NSObject {

	NSMutableArray* _mutableResults;

}

@property (nonatomic,retain) NSMutableArray * mutableResults;              //@synthesize mutableResults=_mutableResults - In the implementation block
@property (nonatomic,readonly) NSArray * results; 
-(NSArray *)results;
-(void)addResult:(id)arg1 ;
-(void)setMutableResults:(NSMutableArray *)arg1 ;
-(id)init;
-(NSMutableArray *)mutableResults;
@end

