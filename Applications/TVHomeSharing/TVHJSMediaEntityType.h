/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:49:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVHomeSharing.app/TVHomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <TVHomeSharing/TVHJSMediaEntityType.h>
@class NSString;


@protocol TVHJSMediaEntityType <JSExport>
@property (nonatomic,copy,readonly) NSString * subtype; 
@property (nonatomic,copy,readonly) NSString * mediaCategoryType; 
@property (nonatomic,copy,readonly) NSString * mediaCollectionType; 
@property (nonatomic,copy,readonly) NSString * mediaItemType; 
@required
-(NSString *)subtype;
-(NSString *)mediaItemType;
-(NSString *)mediaCategoryType;
-(NSString *)mediaCollectionType;

@end


@class NSString, TVHKMediaEntityType;

@interface TVHJSMediaEntityType : IKJSObject <TVHJSMediaEntityType> {

	NSString* _subtype;
	NSString* _mediaCategoryType;
	NSString* _mediaCollectionType;
	NSString* _mediaItemType;
	TVHKMediaEntityType* _mediaEntityType;

}

@property (nonatomic,retain) TVHKMediaEntityType * mediaEntityType;              //@synthesize mediaEntityType=_mediaEntityType - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtype;                          //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaCategoryType;                //@synthesize mediaCategoryType=_mediaCategoryType - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaCollectionType;              //@synthesize mediaCollectionType=_mediaCollectionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaItemType;                    //@synthesize mediaItemType=_mediaItemType - In the implementation block
-(id)init;
-(NSString *)subtype;
-(NSString *)mediaItemType;
-(void)setMediaEntityType:(TVHKMediaEntityType *)arg1 ;
-(TVHKMediaEntityType *)mediaEntityType;
-(id)initWithAppContext:(id)arg1 ;
-(NSString *)mediaCategoryType;
-(NSString *)mediaCollectionType;
-(id)initWithMediaEntityType:(id)arg1 appContext:(id)arg2 ;
@end

