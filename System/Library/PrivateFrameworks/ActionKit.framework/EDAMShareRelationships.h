/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSArray, EDAMShareRelationshipRestrictions;

@interface EDAMShareRelationships : FATObject {

	NSArray* _invitations;
	NSArray* _memberships;
	EDAMShareRelationshipRestrictions* _invitationRestrictions;

}

@property (nonatomic,retain) NSArray * invitations;                                                   //@synthesize invitations=_invitations - In the implementation block
@property (nonatomic,retain) NSArray * memberships;                                                   //@synthesize memberships=_memberships - In the implementation block
@property (nonatomic,retain) EDAMShareRelationshipRestrictions * invitationRestrictions;              //@synthesize invitationRestrictions=_invitationRestrictions - In the implementation block
+(id)structName;
+(id)structFields;
-(NSArray *)invitations;
-(void)setInvitations:(NSArray *)arg1 ;
-(NSArray *)memberships;
-(void)setMemberships:(NSArray *)arg1 ;
-(EDAMShareRelationshipRestrictions *)invitationRestrictions;
-(void)setInvitationRestrictions:(EDAMShareRelationshipRestrictions *)arg1 ;
@end

