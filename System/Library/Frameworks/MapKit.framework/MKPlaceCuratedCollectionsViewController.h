/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKCollectionCarouselRoutingDelegate.h>
#import <libobjc.A.dylib/MKCollectionCarouselAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol MKPlaceCollectionsDelegate;
@class MKMapItem, MKPlaceSectionHeaderView, MKCollectionsCarouselView, NSArray, MKCuratedCollectionsPlacecardAnalyticsManager, NSString;

@interface MKPlaceCuratedCollectionsViewController : MKPlaceSectionViewController <MKCollectionCarouselRoutingDelegate, MKCollectionCarouselAnalyticsDelegate, MKModuleViewControllerProtocol> {

	MKMapItem* _mapItem;
	CGSize _viewSize;
	MKPlaceSectionHeaderView* _headerView;
	MKCollectionsCarouselView* _carouselView;
	NSArray* _placeCollections;
	NSArray* _collectionIds;
	MKCuratedCollectionsPlacecardAnalyticsManager* _analyticsManager;
	id<MKPlaceCollectionsDelegate> _collectionsDelegate;

}

@property (nonatomic,retain) MKPlaceSectionHeaderView * headerView;                                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) MKCollectionsCarouselView * carouselView;                                      //@synthesize carouselView=_carouselView - In the implementation block
@property (nonatomic,retain) NSArray * placeCollections;                                                    //@synthesize placeCollections=_placeCollections - In the implementation block
@property (nonatomic,retain) NSArray * collectionIds;                                                       //@synthesize collectionIds=_collectionIds - In the implementation block
@property (nonatomic,retain) MKCuratedCollectionsPlacecardAnalyticsManager * analyticsManager;              //@synthesize analyticsManager=_analyticsManager - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCollectionsDelegate> collectionsDelegate;                     //@synthesize collectionsDelegate=_collectionsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MKCuratedCollectionsPlacecardAnalyticsManager *)analyticsManager;
-(void)setCollectionIds:(NSArray *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)setHeaderView:(MKPlaceSectionHeaderView *)arg1 ;
-(NSArray *)collectionIds;
-(MKCollectionsCarouselView *)carouselView;
-(void)setUpHeaderView;
-(void)updateConstraintsForCarouselView;
-(NSArray *)placeCollections;
-(void)showMoreTapped;
-(id<MKPlaceCollectionsDelegate>)collectionsDelegate;
-(void)setCarouselView:(MKCollectionsCarouselView *)arg1 ;
-(void)setPlaceCollections:(NSArray *)arg1 ;
-(void)setAnalyticsManager:(MKCuratedCollectionsPlacecardAnalyticsManager *)arg1 ;
-(void)setCollectionsDelegate:(id<MKPlaceCollectionsDelegate>)arg1 ;
-(void)refreshCollections;
-(void)routeToCuratedCollection:(id)arg1 ;
-(void)collectionsCarouselDidRouteToCollectionId:(id)arg1 atIndex:(long long)arg2 isSaved:(BOOL)arg3 ;
-(void)collectionsCarouselDidScrollForward;
-(void)collectionsCarouselDidScrollBackward;
-(MKPlaceSectionHeaderView *)headerView;
-(id)initWithDelegate:(id)arg1 withPlaceCollections:(id)arg2 usingSyncCoordinator:(id)arg3 usingMapItem:(id)arg4 usingCollectionIds:(id)arg5 ;
-(BOOL)_canShowWhileLocked;
@end
