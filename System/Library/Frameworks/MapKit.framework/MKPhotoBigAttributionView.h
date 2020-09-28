/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKPhotoBigAttributionViewSubclass.h>
#import <libobjc.A.dylib/MKActivityObserving.h>

@class UIImageView, UIView, UIActivityIndicatorView, MKMapItem, NSString;

@interface MKPhotoBigAttributionView : UIView <MKPhotoBigAttributionViewSubclass, MKActivityObserving> {

	UIImageView* _imageView;
	UIView* _backgroundView;
	BOOL _needsImageLoad;
	UIActivityIndicatorView* _spinner;
	long long _context;
	long long _type;
	MKMapItem* _mapItem;
	UIView* _contentView;

}

@property (nonatomic,readonly) UIView * contentView;                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,readonly) long long context;                              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                              //@synthesize mapItem=_mapItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bigAttributionViewForMapItem:(id)arg1 attributionType:(long long)arg2 isFirstParty:(BOOL)arg3 context:(long long)arg4 ;
-(void)updateBackgroundIfNeeded;
-(UIView *)contentView;
-(UIActivityIndicatorView *)spinner;
-(void)layoutSubviews;
-(long long)type;
-(long long)context;
-(void)setType:(long long)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)beginAnimatingActivityIndicator;
-(void)endAnimatingActivityIndicatorWithError:(id)arg1 ;
-(void)didUpdateMapItem;
-(void)didUpdateAttributionViewType;
-(void)willStartAnimatingActivityIndicatorView;
-(void)didEndAnimatingActivityIndicatorView;
-(MKMapItem *)mapItem;
-(id)initWithContext:(long long)arg1 ;
@end
