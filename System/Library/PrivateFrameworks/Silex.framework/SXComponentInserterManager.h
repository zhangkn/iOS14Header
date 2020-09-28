/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXComponentInserterManager.h>

@protocol SXComponentInserterManager <SXComponentInserterProvider>
@required
-(void)removeInserter:(id)arg1;
-(void)addInserter:(id)arg1;

@end


@class NSMutableArray, NSArray, NSString;

@interface SXComponentInserterManager : NSObject <SXComponentInserterManager> {

	NSMutableArray* _mutableInserters;

}

@property (nonatomic,readonly) NSMutableArray * mutableInserters;              //@synthesize mutableInserters=_mutableInserters - In the implementation block
@property (nonatomic,readonly) NSArray * inserters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeInserter:(id)arg1 ;
-(void)addInserter:(id)arg1 ;
-(id)init;
-(NSMutableArray *)mutableInserters;
-(NSArray *)inserters;
@end
