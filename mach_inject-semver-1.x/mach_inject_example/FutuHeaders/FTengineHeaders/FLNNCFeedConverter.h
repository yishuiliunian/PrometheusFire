//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2017 15:19:17).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FLNNCFeedConverter : NSObject
{
}

+ (struct NNCFeedElementPicture *)convertFeedPicItemFromFeedElemPicture:(id)arg1;
+ (void)convertFeedPicInfoItemFromFeedElemPictureInfo:(id)arg1 toPicInfoItem:(struct NNCFeedElementPictureInfo *)arg2;
+ (void)convertFeedRichTextItemFromFeedElemRichText:(id)arg1 richTextItem:(struct NNCFeedElementRichText *)arg2;
+ (id)feedElemPictureFromFeedPictureInfoItem:(struct NNCFeedElementPictureInfo)arg1;
+ (id)feedElemBasicPicFromFeedPictureItem:(struct NNCFeedElementPicture)arg1;
+ (id)feedElemRichTextFromFeedRichTextItem:(struct NNCFeedElementRichText)arg1;
+ (id)feedElemCommentFromFeedCommentItem:(struct NNCFeedElementComment)arg1;
+ (id)feedElemLikeFromFeedLikeItem:(struct NNCFeedElementLike)arg1;
+ (id)feedElemOriginalFromFeedOriginalItem:(struct NNCFeedElementOriginal)arg1;
+ (id)feedElemContentFromFeedContentItem:(struct NNCFeedElementContent)arg1;
+ (id)feedElemSummaryFromFeedSummaryItem:(struct NNCFeedElementSummary)arg1;
+ (id)feedElemUserInfoFromFeedUserInfoItem:(struct NNCFeedElementUserInfo)arg1;
+ (id)feedElemCommonFromFeedCommonItem:(struct NNCFeedElementComm)arg1;
+ (id)feedModelFromFeedItem:(struct NNCFeedModel *)arg1;

@end
