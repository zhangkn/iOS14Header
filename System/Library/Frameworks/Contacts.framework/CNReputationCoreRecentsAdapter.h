/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRRecentContactsLibrary;

@interface CNReputationCoreRecentsAdapter : NSObject {

	CRRecentContactsLibrary* _library;

}

@property (nonatomic,readonly) CRRecentContactsLibrary * library;              //@synthesize library=_library - In the implementation block
-(CRRecentContactsLibrary *)library;
-(id)initWithRecentContactsLibrary:(id)arg1 ;
-(id)init;
-(id)recentContactsForHandle:(id)arg1 ;
@end

