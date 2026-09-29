#include <iostream>
using namespace std;

class SocialMediaUploader
{
public:
    virtual void uploadContent()
    {
        cout << "Uploading content to social media...";
    }
};

class InstagramUploader : public SocialMediaUploader
{
public:
    void uploadContent() override
    {
        cout << "Instagram: Uploading photo or short video as a post.";
    }
};

class YouTubeUploader : public SocialMediaUploader
{
public:
    void uploadContent() override
    {
        cout << "YouTube: Uploading a video to the channel.";
    }
};

int main()
{
    SocialMediaUploader *uploader;

    InstagramUploader instagram;
    YouTubeUploader youtube;

    uploader = &instagram;
    uploader->uploadContent();

    uploader = &youtube;
    uploader->uploadContent();
}

