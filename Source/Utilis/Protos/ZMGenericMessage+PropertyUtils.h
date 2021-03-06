// 
// Wire
// Copyright (C) 2016 Wire Swiss GmbH
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program. If not, see http://www.gnu.org/licenses/.
// 


@import WireProtos;


@interface ZMText (Utils)

+ (instancetype)textWithMessage:(NSString *)message linkPreview:(ZMLinkPreview *)linkPreview;
+ (instancetype)textWithMessage:(NSString *)message linkPreview:(ZMLinkPreview *)linkPreview mentions:(NSArray<ZMMention *> *)mentions;

@end


@interface ZMLastRead (Utils)

+ (ZMLastRead *)lastReadWithTimestamp:(NSDate *)timeStamp
                  conversationRemoteID:(NSUUID *)conversationID;

@end



@interface ZMCleared (Utils)

+ (instancetype)clearedWithTimestamp:(NSDate *)timeStamp
          conversationRemoteID:(NSUUID *)conversationID;

@end




@interface ZMMessageHide (Utils)

+ (instancetype)messageHideWithMessageID:(NSUUID *)messageID
                          conversationID:(NSUUID *)conversationID;

@end




@interface ZMMessageDelete (Utils)

+ (instancetype)messageDeleteWithMessageID:(NSUUID *)messageID;

@end




@interface ZMMessageEdit (Utils)

+ (instancetype)messageEditWithMessageID:(NSUUID *)messageID newText:(NSString *)newText linkPreview:(ZMLinkPreview*)linkPreview;

+ (instancetype)messageEditWithMessageID:(NSUUID *)messageID newText:(NSString *)newText linkPreview:(ZMLinkPreview*)linkPreview mentions:(NSArray<ZMMention *> *)mentions;

@end


@interface ZMReaction (Utils)

+ (instancetype)reactionWithEmoji:(NSString *)emoji messageID:(NSUUID *)messageID;

@end

@interface ZMConfirmation (Utils)

+ (instancetype)messageWithMessageID:(NSUUID *)messageID confirmationType:(ZMConfirmationType)confirmationType;

@end

