/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _MKUserLocationView, NSObject, CNContactStore, CNMonogrammer;

@interface _MKUserLocationViewImageProvider : NSObject {

	_MKUserLocationView* _view;
	NSObject*<OS_dispatch_queue> _queue;
	CNContactStore* _contactStore;
	CNMonogrammer* _monogrammer;

}
-(void)_contactsChanged:(id)arg1 ;
-(id)_monogrammer;
-(id)init;
-(id)initWithUserLocationView:(id)arg1 ;
-(void)_updateImage;
-(void)_updateContactImage;
-(void)_updateDefaultImage;
@end

