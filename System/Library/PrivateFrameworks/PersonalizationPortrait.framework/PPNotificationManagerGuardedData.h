/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject, SGSuggestionsServiceContactsProtocol;
@class PPNotificationHandler, CNContactStore, EKEventStore;

@interface PPNotificationManagerGuardedData : NSObject {

	PPNotificationHandler* _contactsHandler;
	id<NSObject> _contactsToken;
	CNContactStore* _cnStore;
	PPNotificationHandler* _meCardHandler;
	id<NSObject> _meCardToken;
	id<NSObject> _meCardDonationToken;
	PPNotificationHandler* _portraitChangeHandler;
	int _portraitChangeToken;
	PPNotificationHandler* _portraitInvalidationHandler;
	int _portraitInvalidationToken;
	PPNotificationHandler* _eventKitHandler;
	id<NSObject> _eventKitToken;
	EKEventStore* _ekStore;
	long long _eventKitChangeTrackingToken;
	id<SGSuggestionsServiceContactsProtocol> _suggestionsService;
	PPNotificationHandler* _suggestionsHandler;
	id _suggestionsToken;

}
-(id)description;
@end
