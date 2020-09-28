/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUIFamilyMemberDelegate;
@class NSNumber, NSString, UIImage;

@interface VUIFamilyMember : NSObject {

	BOOL _sharingPurchases;
	NSNumber* _memberIdentifier;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _accountName;
	UIImage* _memberImage;
	id<VUIFamilyMemberDelegate> _delegate;

}

@property (nonatomic,retain) NSNumber * memberIdentifier;                              //@synthesize memberIdentifier=_memberIdentifier - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                     //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                      //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * accountName;                                   //@synthesize accountName=_accountName - In the implementation block
@property (assign,nonatomic) BOOL sharingPurchases;                                    //@synthesize sharingPurchases=_sharingPurchases - In the implementation block
@property (nonatomic,retain) UIImage * memberImage;                                    //@synthesize memberImage=_memberImage - In the implementation block
@property (assign,nonatomic,__weak) id<VUIFamilyMemberDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setFirstName:(NSString *)arg1 ;
-(NSString *)lastName;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(void)setSharingPurchases:(BOOL)arg1 ;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setDelegate:(id<VUIFamilyMemberDelegate>)arg1 ;
-(id<VUIFamilyMemberDelegate>)delegate;
-(unsigned long long)hash;
-(NSNumber *)memberIdentifier;
-(UIImage *)memberImage;
-(void)setMemberIdentifier:(NSNumber *)arg1 ;
-(BOOL)sharingPurchases;
-(void)setMemberImage:(UIImage *)arg1 ;
@end
