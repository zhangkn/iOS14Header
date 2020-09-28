/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLRelationshipOrderingState : NSObject {

	id _oids;
	id _foks;
	BOOL _isMutable;

}
-(id)objectIDs;
-(id)orderKeys;
-(id)initWithObjectIDs:(id)arg1 orderValues:(id)arg2 ;
-(unsigned long long)indexForObjectID:(id)arg1 ;
-(BOOL)setOrderValue:(long long)arg1 forObjectID:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(unsigned long long)findIndexForObjectID:(id)arg1 newOrderValue:(long long)arg2 hasOrderValueConflictWithObjectID:(id*)arg3 ;
-(id)description;
@end
