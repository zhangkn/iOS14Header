/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class DMFControlGroupIdentifier, NSString, NSDate, NSArray, NSSet;


@protocol CRKASMCourse
@property (nonatomic,copy,readonly) DMFControlGroupIdentifier * identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long mascot; 
@property (nonatomic,readonly) unsigned long long color; 
@property (nonatomic,readonly) id<CRKASMLocation> location; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (nonatomic,readonly) id<CRKIdentity> identity; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSArray * users; 
@property (nonatomic,copy,readonly) NSArray * trustedUsers; 
@property (nonatomic,copy,readonly) NSSet * allTrustedUserCertificates; 
@required
-(BOOL)isEditable;
-(DMFControlGroupIdentifier *)identifier;
-(id<CRKASMLocation>)location;
-(unsigned long long)mascot;
-(id<CRKIdentity>)identity;
-(NSDate *)creationDate;
-(NSArray *)users;
-(unsigned long long)color;
-(NSString *)name;
-(NSArray *)trustedUsers;
-(NSSet *)allTrustedUserCertificates;

@end
