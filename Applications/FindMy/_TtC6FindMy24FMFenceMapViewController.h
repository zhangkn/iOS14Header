//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FMMapDragRadiusViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"

@class MISSING_TYPE;

@interface _TtC6FindMy24FMFenceMapViewController : UIViewController <UISearchResultsUpdating, UISearchBarDelegate, FMMapDragRadiusViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate>
{
    MISSING_TYPE *mediator;	// 8 = 0x8
    MISSING_TYPE *myLocation;	// 16 = 0x10
    MISSING_TYPE *selectedLocation;	// 216 = 0xd8
    MISSING_TYPE *address;	// 416 = 0x1a0
    MISSING_TYPE *addressType;	// 536 = 0x218
    MISSING_TYPE *addressLabel;	// 544 = 0x220
    MISSING_TYPE *addressRadius;	// 568 = 0x238
    MISSING_TYPE *friendForFence;	// 2672048 = 0x28c5b0
    MISSING_TYPE *isNotifyMe;	// 0 = 0x0
    MISSING_TYPE *isOtherUsage;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 0 = 0x0
    MISSING_TYPE *peopleSubscription;	// 0 = 0x0
    MISSING_TYPE *style;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *mapView;	// 1952542572 = 0x74616f6c
    MISSING_TYPE *dragView;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *searchResultsTableView;	// 0 = 0x0
    MISSING_TYPE *doneButton;	// 0 = 0x0
    MISSING_TYPE *smallRadiusBarButtonItem;	// 0 = 0x0
    MISSING_TYPE *mediumRadiusBarButtonItem;	// 0 = 0x0
    MISSING_TYPE *largeRadiusBarButtonItem;	// 0 = 0x0
    MISSING_TYPE *userDroppedAnnotation;	// 0 = 0x0
    MISSING_TYPE *selectedAnnotation;	// 2672120 = 0x28c5f8
    MISSING_TYPE *currentMapRegion;	// 0 = 0x0
    MISSING_TYPE *showingUserLocation;	// 32 = 0x20
    MISSING_TYPE *mapSearchResults;	// 0 = 0x0
    MISSING_TYPE *mapLastSeachAddressType;	// 0 = 0x0
    MISSING_TYPE *mapLastSearchedQuery;	// 2672120 = 0x28c5f8
    MISSING_TYPE *defaultSearchRecords;	// 0 = 0x0
    MISSING_TYPE *isResigningFromTableView;	// 0 = 0x0
    MISSING_TYPE *contactsDataController;	// 0 = 0x0
    MISSING_TYPE *searchController;	// 0 = 0x0
    MISSING_TYPE *filteredSearchRecords;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000100187924
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001001878bc
- (void)cancelActionWithSender:(id)arg1;	// IMP=0x00000001001877ec
- (void)doneActionWithSender:(id)arg1;	// IMP=0x00000001001877a0
- (void)refreshActionWithSender:(id)arg1;	// IMP=0x0000000100187754
- (void)longPressActionWithSender:(id)arg1;	// IMP=0x0000000100187708
- (void)mapTappedActionWithSender:(id)arg1;	// IMP=0x0000000100187498
- (void)chooseLargeRadiusActionWithSender:(id)arg1;	// IMP=0x000000010018741c
- (void)chooseMediumRadiusActionWithSender:(id)arg1;	// IMP=0x0000000100187404
- (void)chooseSmallRadiusActionWithSender:(id)arg1;	// IMP=0x00000001001873f0
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x0000000100187318
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000001001872cc
- (void)didStopDraggingHandle:(id)arg1;	// IMP=0x0000000100187254
- (void)willStartDraggingHandle:(id)arg1;	// IMP=0x000000010018705c
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010017f084
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010017ebac
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010017ea48
- (void)viewDidLoad;	// IMP=0x000000010017e92c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010017cd88
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000e3774
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000e2e6c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000e2d84
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000e28ac
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000e2898
- (void)mapViewDidStopLocatingUser:(id)arg1;	// IMP=0x0000000100174cd4
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;	// IMP=0x0000000100174cc4
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;	// IMP=0x0000000100174c44
- (void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4;	// IMP=0x0000000100174a94
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;	// IMP=0x0000000100174a14
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x0000000100174740
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;	// IMP=0x000000010017470c
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;	// IMP=0x0000000100174698
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;	// IMP=0x0000000100174628
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;	// IMP=0x00000001001745b0
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x000000010017cc18
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x000000010017cb04
- (_Bool)searchBarShouldEndEditing:(id)arg1;	// IMP=0x000000010017c9bc
- (_Bool)searchBarShouldBeginEditing:(id)arg1;	// IMP=0x000000010017c968
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x000000010017c7a8

@end
