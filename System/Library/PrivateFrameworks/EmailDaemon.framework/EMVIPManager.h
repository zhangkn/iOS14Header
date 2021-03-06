/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet, EAEmailAddressSet;


@protocol EMVIPManager <EMVIPReader,NSObject>
@property (nonatomic,copy,readonly) NSSet * allVIPs; 
@property (nonatomic,copy,readonly) EAEmailAddressSet * allVIPEmailAddresses; 
@required
-(void)saveVIPs:(id)arg1;
-(void)removeVIPsWithEmailAddresses:(id)arg1;
-(void)removeVIPsWithIdentifiers:(id)arg1;
-(NSSet *)allVIPs;
-(EAEmailAddressSet *)allVIPEmailAddresses;
-(id)vipWithIdentifier:(id)arg1;

@end

