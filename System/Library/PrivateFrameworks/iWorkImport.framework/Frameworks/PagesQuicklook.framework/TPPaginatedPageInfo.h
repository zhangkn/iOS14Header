/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:19 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/PagesQuicklook.framework/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PagesQuicklook/PagesQuicklook-Structs.h>
#import <PagesQuicklook/TPPageInfo.h>

@class NSArray, TPDrawablesZOrder;

@interface TPPaginatedPageInfo : TPPageInfo

@property (nonatomic,readonly) NSArray * floatingDrawableInfos; 
@property (nonatomic,readonly) TPDrawablesZOrder * drawablesZOrder; 
@property (nonatomic,readonly) BOOL isDocumentSetupPage; 
-(id)pageController;
-(Class)layoutClass;
-(Class)repClass;
-(CGRect)pageFrame;
-(TPDrawablesZOrder *)drawablesZOrder;
-(id)orderedDrawables:(id)arg1 ;
-(BOOL)isDocumentSetupPage;
-(NSArray *)floatingDrawableInfos;
@end
