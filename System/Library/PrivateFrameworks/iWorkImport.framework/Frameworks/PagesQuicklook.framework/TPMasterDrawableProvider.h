/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:19 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/PagesQuicklook.framework/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol TPMasterDrawableProvider <NSObject>
@property (nonatomic,readonly) unsigned long long countOfMasterDrawables; 
@property (nonatomic,readonly) NSArray * masterDrawables; 
@required
-(NSArray *)masterDrawables;
-(unsigned long long)countOfMasterDrawables;
-(void)addMasterDrawable:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(BOOL)arg4;
-(id)masterDrawablesSortedByZOrder:(id)arg1;
-(unsigned long long)indexOfMasterDrawable:(id)arg1;
-(void)addMasterDrawables:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(BOOL)arg4;
-(void)removeMasterDrawable:(id)arg1 suppressDOLC:(BOOL)arg2;

@end

