/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, UIKBAutoFillTestExpectedResult, UIView, NSString, UINavigationItem;

@interface UIKBAutoFillTestArchive : NSObject <NSCoding, NSCopying> {

	NSMutableDictionary* _tableViewTagToDataSource;
	BOOL _requiresNavigationControllerNesting;
	UIKBAutoFillTestExpectedResult* _expectedResult;
	UIView* _snapshotView;
	NSString* _viewControllerClassName;
	NSString* _viewControllerTitle;
	NSString* _navigationControllerClassName;
	NSString* _presentingViewControllerClassName;
	UINavigationItem* _viewControllerNavigationItem;

}

@property (nonatomic,retain) UIView * snapshotView;                                        //@synthesize snapshotView=_snapshotView - In the implementation block
@property (nonatomic,copy) NSString * viewControllerClassName;                             //@synthesize viewControllerClassName=_viewControllerClassName - In the implementation block
@property (nonatomic,copy) NSString * viewControllerTitle;                                 //@synthesize viewControllerTitle=_viewControllerTitle - In the implementation block
@property (assign,nonatomic) BOOL requiresNavigationControllerNesting;                     //@synthesize requiresNavigationControllerNesting=_requiresNavigationControllerNesting - In the implementation block
@property (nonatomic,copy) NSString * navigationControllerClassName;                       //@synthesize navigationControllerClassName=_navigationControllerClassName - In the implementation block
@property (nonatomic,copy) NSString * presentingViewControllerClassName;                   //@synthesize presentingViewControllerClassName=_presentingViewControllerClassName - In the implementation block
@property (nonatomic,retain) UINavigationItem * viewControllerNavigationItem;              //@synthesize viewControllerNavigationItem=_viewControllerNavigationItem - In the implementation block
@property (nonatomic,retain) UIKBAutoFillTestExpectedResult * expectedResult;              //@synthesize expectedResult=_expectedResult - In the implementation block
+(id)autoFillTestArchiveWithData:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIKBAutoFillTestExpectedResult *)expectedResult;
-(id)autoFillTestArchiveData;
-(id)tableViewDataSourceWithTag:(long long)arg1 ;
-(NSString *)viewControllerTitle;
-(void)setTableViewDataSource:(id)arg1 forTableViewWithTag:(long long)arg2 ;
-(void)setExpectedResult:(UIKBAutoFillTestExpectedResult *)arg1 ;
-(void)setViewControllerTitle:(NSString *)arg1 ;
-(BOOL)requiresNavigationControllerNesting;
-(void)setRequiresNavigationControllerNesting:(BOOL)arg1 ;
-(NSString *)navigationControllerClassName;
-(void)setViewControllerNavigationItem:(UINavigationItem *)arg1 ;
-(void)setNavigationControllerClassName:(NSString *)arg1 ;
-(UINavigationItem *)viewControllerNavigationItem;
-(NSString *)presentingViewControllerClassName;
-(void)setPresentingViewControllerClassName:(NSString *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)snapshotView;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)viewControllerClassName;
-(void)setViewControllerClassName:(NSString *)arg1 ;
-(void)setSnapshotView:(UIView *)arg1 ;
@end
