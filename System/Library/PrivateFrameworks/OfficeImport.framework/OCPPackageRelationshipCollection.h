/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary;

@interface OCPPackageRelationshipCollection : NSObject {

	NSMutableDictionary* mIdentifierMap;
	NSMutableDictionary* mTypeMap;

}
-(id)relationshipsByType:(id)arg1 ;
-(id)relationshipForIdentifier:(id)arg1 ;
-(id)initWithRelationshipsXml:(xmlDoc*)arg1 baseLocation:(id)arg2 ;
@end
