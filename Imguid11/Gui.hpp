void Gui() {
    ImGui::Begin("Hello, world!");

    ImGui::Text("This is some useful text.");

    if (ImGui::Button(u8"ÍË³ö")) {
        setting ->done = true;
    }
    ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
    ImGui::End();
}