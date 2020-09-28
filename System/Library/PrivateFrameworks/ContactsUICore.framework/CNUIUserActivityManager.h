/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNLSApplicationWorkspace, CNUIInteractionDonor;
@class CNContactStore;

@interface CNUIUserActivityManager : NSObject {

	CNContactStore* _contactStore;
	id<CNLSApplicationWorkspace> _applicationWorkspace;
	id<CNUIInteractionDonor> _interactionDonor;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) id<CNLSApplicationWorkspace> applicationWorkspace;              //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
@property (nonatomic,readonly) id<CNUIInteractionDonor> interactionDonor;                      //@synthesize interactionDonor=_interactionDonor - In the implementation block
+(id)log;
+(id)descriptorForRequiredKeys;
-(id<CNUIInteractionDonor>)interactionDonor;
-(id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 ;
-(id<CNLSApplicationWorkspace>)applicationWorkspace;
-(void)updateUserActivityState:(id)arg1 withContentsOfContact:(id)arg2 ;
-(id)initWithContactStore:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)makeActivityAdvertisingViewingList;
-(id)makeActivityAdvertisingViewingOfContact:(id)arg1 ;
-(void)publishRequestToCreateContact:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 interactionDonor:(id)arg3 ;
-(void)publishRequestToEditContact:(id)arg1 ;
-(id)initWithApplicationWorkspace:(id)arg1 ;
@end
